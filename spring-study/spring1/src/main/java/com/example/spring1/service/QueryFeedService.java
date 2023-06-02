package com.example.spring1.service;

import com.example.spring1.controller.dto.response.FeedResponse;
import com.example.spring1.entity.Feed;
import com.example.spring1.repository.FeedRepository;
import lombok.Builder;
import lombok.RequiredArgsConstructor;
import org.springframework.stereotype.Service;

@RequiredArgsConstructor
@Service
public class QueryFeedService {

    private final FeedRepository feedRepository;

    public FeedResponse execute(Long id) {
        Feed feed = feedRepository.findById(id)
                .orElseThrow(RuntimeException::new);

        return FeedResponse.builder()
                .title(feed.getTitle())
                .content(feed.getContent())
                .build();
    }
}
