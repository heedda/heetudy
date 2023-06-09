package com.example.spring1.controller;

import com.example.spring1.controller.dto.request.CreateFeedRequest;
import com.example.spring1.controller.dto.request.UpdateFeedRequest;
import com.example.spring1.controller.dto.response.FeedResponse;
import com.example.spring1.controller.dto.response.NameResponse;
import com.example.spring1.controller.dto.response.NumResponse;
import com.example.spring1.repository.FeedRepository;
import com.example.spring1.service.CreateFeedService;
import com.example.spring1.service.DeleteFeedService;
import com.example.spring1.service.QueryFeedService;
import com.example.spring1.service.UpdateFeedService;
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
    private final DeleteFeedService deleteFeedService;
    private  final UpdateFeedService updateFeedService;

    @ResponseStatus(HttpStatus.CREATED)
    @PostMapping
    public void createFeed(@RequestBody @Valid CreateFeedRequest request) {
        createFeedService.execute(request);
    }

    @GetMapping("/{id}")
    public FeedResponse getFeed(@PathVariable("id") Long id) {
        return queryFeedService.execute(id);
    }

    @DeleteMapping("/{id}")
    public void deleteFeed(@PathVariable("id") Long id){
        deleteFeedService.execute(id);
    }

    @PutMapping("/{id}")
    public void updateFeed(@PathVariable("id") Long id, @RequestBody @Valid UpdateFeedRequest request) {
        updateFeedService.execute(id, request);
    }
//    @GetMapping("/yabbi/{yabbi-value}")
//    public Integer getYabbi(@PathVariable("yabbi-value") Integer yabbi) {
//        return yabbi;
//    }
//
//    @GetMapping("/name")//without Param
//    public NameResponse getName(@RequestParam("name") String name){
//        return new NameResponse(name);
//    }
//
//    @GetMapping("/number/{num}")
//    public NumResponse getNum(@PathVariable("num") Integer number){
//        return new NumResponse(number);
//    }
}
