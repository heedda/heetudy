# @Override

오버라이딩을 올바르게 했는지 컴파일러가 체크합니다.

Override는 오버라이딩할 때, 메서드의 이름을 잘못적는 실수를 방지해준다.

```java
class Parent{
	void parentMethod(){}
}

class Child extends Parent{
	@Override
    void pparentmethod(){} // 컴파일 에러! 잘못된 오버라이드 스펠링 틀림
```