package com.example.spring1.entity;

import lombok.*;

import javax.persistence.*;
import javax.validation.constraints.NotNull;

@Getter
@NoArgsConstructor(access = AccessLevel.PROTECTED)
@Entity
public class Feed {

    @Id @GeneratedValue(strategy = GenerationType.IDENTITY)

    @Column(columnDefinition = "BIGINT", nullable = false)
    private Long id;

    @NotNull
    @Column(columnDefinition = "VARCHAR(20)")
    private String title;

    @NotNull
    @Column(columnDefinition = "VARCHAR(1000)")
    private String content;

    @Builder
    public Feed(String title, String content) {
        this.title = title;
        this.content = content;
    }
    public void updateFeed(String title, String content){
        this.title = title;
        this.content = content;
    }
}