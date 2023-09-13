package com.example.spring1.controller.dto.request;

import lombok.Getter;
import lombok.NoArgsConstructor;

@Getter
@NoArgsConstructor
public class CreateUserRequest {
    private String name;
    private int age;
    private String password;
    private String accountId;
}
