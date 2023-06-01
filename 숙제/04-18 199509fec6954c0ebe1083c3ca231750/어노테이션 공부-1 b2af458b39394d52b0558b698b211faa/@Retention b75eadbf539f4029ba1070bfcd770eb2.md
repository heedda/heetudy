# @Retention

어노테이션이 유지되는 기간을 지정하는데 사용

- SOURCE : 소스 파일에만 존재.
- RUNTIME : 클래스 파일에 존재. 실행시에 사용가능

```java
@Target(ElementType.METHOD)
@Retention(RetentionPolicy.SOURCE)
public @interface Override{}
```