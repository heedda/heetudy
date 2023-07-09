package com.example.sprintg2.service;

import com.example.sprintg2.entity.Feed;
import com.example.sprintg2.repository.FeedRepository;
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
