# 2022 고1 3월 모의고사 (3.24 실시)
### 26~30 독서 지문의 패리티 검사, CRC 검사 구현

#### class Test
테스트를 위한 클래스입니다.
```cpp
Test::GenerateData(); // 101101 (Randomly generated)
```

#### class Parity
패리티 검사를 위한 클래스입니다.
```cpp
Parity::Even("101101", false); // ?
Parity::Odd("101101", false); // ?
```

#### class Parity2
2차원 배열을 이용한 패리티 검사를 위한 클래스입니다.
```cpp
Parity2::Even("101101101101", false); // ?
Parity2::Odd("101101101101", false); // ?
```

#### class CRC
CRC 검사를 위한 클래스입니다.
```cpp
CRC::Check("101101101101", false); // ?
```

모든 검사 함수의 두 번째 인자에 `true`를 넣으면 검사 과정과 오류 위치 등에 대한 정보를 얻을 수 있습니다.
