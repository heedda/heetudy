package com.example.spring1.service;

import com.example.spring1.controller.dto.request.CreateFeedRequest;
import com.example.spring1.controller.dto.request.CreateUserRequest;
import com.example.spring1.entity.User;
import com.example.spring1.repository.UserRepository;
import lombok.RequiredArgsConstructor;
import org.springframework.security.crypto.password.PasswordEncoder;
import org.springframework.stereotype.Service;
import org.springframework.transaction.annotation.Transactional;

@RequiredArgsConstructor
@Service
public class CreateUserService {
    private final UserRepository userRepository;
    private final PasswordEncoder passwordEncoder;


    @Transactional
    public void execute(CreateUserRequest request) {
        if (!userRepository.existsByAccountId(request.getAccountId())) {
            throw new RuntimeException("이미 존재하는 유저");
        }

        userRepository.save(
                User.builder()
                        .name(request.getName())
                        .age(request.getAge())
                        .accountId(request.getAccountId())
                        .password(passwordEncoder.encode(request.getPassword()))
                        .build()
        );
    }
}
