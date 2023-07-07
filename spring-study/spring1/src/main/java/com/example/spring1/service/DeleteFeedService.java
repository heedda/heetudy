package com.example.spring1.service;

import com.example.spring1.entity.Feed;
import com.example.spring1.repository.FeedRepository;
import lombok.RequiredArgsConstructor;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

@RequiredArgsConstructor
@Service
public class DeleteFeedService {

    private final FeedRepository feedRepository;

    @Transactional
    public void execute(Long id){
        Feed feed = feedRepository.findById(id)
                .orElseThrow(RuntimeException::new);

        feedRepository.delete(feed);
    }
}
