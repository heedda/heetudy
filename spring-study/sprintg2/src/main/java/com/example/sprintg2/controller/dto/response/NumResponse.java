package com.example.sprintg2.controller.dto.response;

import lombok.Builder;
import lombok.Getter;

@Getter
@Builder
public class NumResponse {
    private final String title;
    private final String content;
}
