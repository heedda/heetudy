package com.example.sprintg2.service;

import com.example.sprintg2.controller.dto.response.FeedResponse;
import com.example.sprintg2.entity.Feed;
import com.example.sprintg2.repository.FeedRepository;
import lombok.RequiredArgsConstructor;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

@RequiredArgsConstructor
@Service
public class QueryFeedService {
    private final FeedRepository feedRepository;

    @Transactional
    public FeedResponse execute(Long id){
        Feed feed =feedRepository.findById(Long id)
                .orElseThrow(RuntimeException::new);

        return FeedResponse.builder()
                .title(feed.getTitle())
                .content(feed.getContent())
                .build();
    }
}
