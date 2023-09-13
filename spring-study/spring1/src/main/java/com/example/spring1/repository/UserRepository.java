package com.example.spring1.repository;

import com.example.spring1.entity.User;
import org.springframework.data.jpa.repository.JpaRepository;

public interface UserRepository extends JpaRepository<User, Long> {

    boolean existsByAccountId(String accountId);
}
