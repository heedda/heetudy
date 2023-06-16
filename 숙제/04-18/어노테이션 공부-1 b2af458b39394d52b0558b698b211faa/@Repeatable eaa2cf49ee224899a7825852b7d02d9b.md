# @Repeatable

반복해서 붙일 수 있는 어노테이션을 정의할 때 사용

```java
@Repeatable(ToDos.class)
@interface ToDo{
	String value();
}

@ToDo("delete test codes.")
@ToDo("override inherited methods")
class MyClass{
	~~
}

@interface ToDos{
	ToDo[] value();
}
```