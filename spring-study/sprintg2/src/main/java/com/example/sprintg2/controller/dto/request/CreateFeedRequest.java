package com.example.sprintg2.controller.dto.request;

import lombok.Getter;
import lombok.NoArgsConstructor;

@Getter
@NoArgsConstructor
public class CreateFeedRequest {
    private String title;
    private String content;
}
