package com.example.sprintg2.controller.dto;

import lombok.RequiredArgsConstructor;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

@RequiredArgsConstructor
@RequestMapping("/feed")
@RestController
public class FeedController {
    private final CreateFeedServise createFeedServise;
}
