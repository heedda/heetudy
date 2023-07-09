package com.example.sprintg2.service;

import com.example.sprintg2.controller.dto.request.UpdateFeedRequest;
import com.example.sprintg2.controller.dto.response.FeedResponse;
import com.example.sprintg2.entity.Feed;
import com.example.sprintg2.repository.FeedRepository;
import lombok.RequiredArgsConstructor;
import org.apache.coyote.Response;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

@RequiredArgsConstructor
@Service
public class UpdateFeedService {
    private final FeedRepository feedRepository;

    @Transactional
    public FeedResponse execute(Long id, UpdateFeedRequest request){
        Feed feed = feedRepository.findById(id)
                .orElseThrow(RuntimeException::new);

        feed.updateFeed(request.getTitle(), request.getContent());
    }
}
