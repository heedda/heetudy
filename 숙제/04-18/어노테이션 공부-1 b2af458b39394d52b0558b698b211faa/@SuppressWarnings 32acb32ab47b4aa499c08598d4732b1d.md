# @SuppressWarnings

컴파일러의 경고메세지가 나타나지 않게 한다.

```java
@SuppressWarnings("unchecked")
ArrayList list = new ArrayList(); // 제네릭 타입을 지정하지 않음!
list.add(obj); // 경고 발생 !!! 경고 내용 = unchecked
```