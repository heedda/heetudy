package com.example.spring1.controller;

import com.example.spring1.controller.dto.request.CreateFeedRequest;
import com.example.spring1.controller.dto.response.FeedResponse;
import com.example.spring1.controller.dto.response.NameResponse;
import com.example.spring1.controller.dto.response.NumResponse;
import com.example.spring1.service.CreateFeedService;
import com.example.spring1.service.QueryFeedService;
import lombok.RequiredArgsConstructor;
import lombok.Value;
import org.springframework.http.HttpStatus;
import org.springframework.web.bind.annotation.*;

import javax.validation.Valid;

@RequiredArgsConstructor
@RequestMapping("/feed")
@RestController
public class FeedController {
    private final CreateFeedService createFeedService;
    private final QueryFeedService queryFeedService;

    @ResponseStatus(HttpStatus.CREATED)
    @PostMapping
    public void createFeed(@RequestBody @Valid CreateFeedRequest request) {
        createFeedService.execute(request);
    }

    @GetMapping("/yabbi/{yabbi-value}")
    public Integer getYabbi(@PathVariable("yabbi-value") Integer yabbi) {
        return yabbi;
    }

    @GetMapping("/name")
    public NameResponse getName(@RequestParam("name") String name){
        return new NameResponse(name);
    }

    @GetMapping("/number/{num}")
    public NumResponse getNum(@PathVariable("num") Integer number){
        return new NumResponse(number);
    }

    @GetMapping("/{id}")
    public FeedResponse getFeed(@PathVariable("id") Long id) {
        return queryFeedService.execute(id);
    }
}
