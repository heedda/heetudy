package com.example.spring1.controller.dto.response;

import lombok.AllArgsConstructor;
import lombok.Builder;
import lombok.Getter;

@Getter
@Builder
public class FeedResponse {
    private final String title;
    private final String content;
}
