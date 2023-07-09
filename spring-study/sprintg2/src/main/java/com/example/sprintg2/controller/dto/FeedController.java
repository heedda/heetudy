package com.example.sprintg2.controller.dto;

import com.example.sprintg2.controller.dto.request.CreateFeedRequest;
import com.example.sprintg2.controller.dto.request.UpdateFeedRequest;
import com.example.sprintg2.controller.dto.response.FeedResponse;
import com.example.sprintg2.controller.service.CreateFeedService;
import com.example.sprintg2.controller.service.CreateFeedServise;
import com.example.sprintg2.service.DeleteFeedService;
import com.example.sprintg2.service.QueryFeedService;
import com.example.sprintg2.service.UpdateFeedService;
import lombok.RequiredArgsConstructor;
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
    private final UpdateFeedService updateFeedService;

    @ResponseStatus(HttpStatus.CREATED)
    @PostMapping
    public void createFeed(@RequestBody @Valid CreateFeedRequest request){
        createFeedService.execute(request);
    }

    @GetMapping("/{id}")
    public FeedResponse getFeed(@PathVariable Long id){
        return queryFeedService.execute(id);
    }

    @GetMapping("/{id}")
    public void deleteFeed(@PathVariable Long id){
        deleteFeedService.execute(id);
    }

    @GetMapping("/{id}")
    public void updateFeed(@PathVariable("id") Long id, @RequestBody UpdateFeedRequest updateFeedRequest){
        updateFeedService.execute(id, updateFeedRequest);
    }
}
