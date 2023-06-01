package com.example.spring1.entity;

import lombok.AccessLevel;
import lombok.Builder;
import lombok.Getter;
import lombok.NoArgsConstructor;

import javax.persistence.*;
import javax.validation.constraints.NotNull;

@Getter
@NoArgsConstructor(access = AccessLevel.PROTECTED)
@Entity
public class User {
    @NotNull
    @Column(columnDefinition = "BIGINT")/*다했습니다.*//**//**//**//**//**//**/
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private Long id;

    @NotNull
    @Column(columnDefinition = "VARCHAR(15)")
    private String name;

    @NotNull
    @Column(columnDefinition = "VARCHAR(30)")
    private String accountId;

    @NotNull
    @Column(columnDefinition = "VARCHAR(60)")
    private String password;

    @NotNull
    @Column(columnDefinition = "INT")
    private int age;

    @Builder
    public User(String name, String accountId, String password, int age) {
        this.name = name;
        this.accountId = accountId;
        this.password = password;
        this.age = age;
    }
}
