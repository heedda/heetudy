package com.example.spring1.service;

import com.example.spring1.entity.Feed;
import com.example.spring1.repository.FeedRepository;
import lombok.RequiredArgsConstructor;
import org.springframework.stereotype.Service;
@RequiredArgsConstructor
@Service
public class UpdateFeedService {

    private final FeedRepository feedRepository;

    public void execute(Long id) {
        Feed feed = feedRepository.findById(id)
                .orElseThrow(RuntimeException::new);

        feed.updateFeed(feed);
    }
}
