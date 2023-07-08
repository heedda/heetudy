package com.example.sprintg2.service;

import com.example.sprintg2.controller.dto.request.CreateFeedRequest;
import com.example.sprintg2.entity.Feed;
import com.example.sprintg2.repository.FeedRepository;
import lombok.RequiredArgsConstructor;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

@RequiredArgsConstructor
@Service
public class CreateFeedService {
    private final FeedRepository feedRepository;

    @Transactional
    public void excute(CreateFeedRequest request){
        feedRepository.save(
                Feed.builder()
                        .title(request.getTitle())
                        .content(request.getContent())
                        .build()
        );
    }
}
