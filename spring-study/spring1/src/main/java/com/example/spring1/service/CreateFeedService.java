package com.example.spring1.service;

import com.example.spring1.controller.dto.request.CreateFeedRequest;
import com.example.spring1.entity.Feed;
import com.example.spring1.repository.FeedRepository;
import lombok.RequiredArgsConstructor;
import org.springframework.stereotype.Service;

import javax.transaction.Transactional;

@RequiredArgsConstructor
@Service
public class CreateFeedService {

    private final FeedRepository feedRepository;

    @Transactional
    public void execute(CreateFeedRequest request){
        feedRepository.save(
                Feed.builder()
                        .title(request.getTitle())
                        .content(request.getContent())
                        .build()
        );
    }
}
