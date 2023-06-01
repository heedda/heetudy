# DTO, VO, DAO

DTO 란 *Data Transfer Object*의 약자다. 논리를 가지지 않은 객체이다. 그리고 getter/setter만 가지고 있다.

그니까 DTO는 데이터를 전송하기 위해서 사용되는 인스턴스라는 것이다.

DTO의 장점은 OOP의 경우 호출시스템으로 인해서 주의를 기울이지 않으면 숨기고 싶은 중요한 데이터가 노출이 될 수 있는데 DTO는 필요한 데이터만 전송을 할 수 있어서 그런 걱정이 줄었다.

**VO란**

Read-Only 특징을 가지고 값을 위해서 쓰인다.

DTO와 달리 VO는 getter 만 가지고 있다.

**DAO란**

DB data에 접근하기 위한 객체이다.

DAO란 *Decentalized Autonomous Organization*의 약자로 ‘탈중앙화자율조직’이라는 뜻을 가지고 있다.

직접 DB에 접근을 해서 삽입, 삭제, 조회를 다 할 수 있는 기능이 있다.

[Spring MVC](DTO,%20VO,%20DAO%20842cf4f6ca0f435f9ddf9a239428a9c0/Spring%20MVC%20f0e5417903f34c299d1fe93b89966149.md)