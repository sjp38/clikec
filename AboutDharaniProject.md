
---


# Dharani Project #
Dharani Project 는 C Like C 프로젝트의 서브 프로젝트로, 서버-클라이언트 통신 라이브러리를 개발한다.

과거 **Lokapala 프로젝트**(http://code.google.com/p/lokapala)에서 서버-클라이언트 통신을 구현하기 위해 Lokapala 시스템 내에서 사용 되었던 Dharani Component 의 연장선상으로, 당시 사용되었던 소스 코드에 기반해 라이브러리 화 한다.


독립된 서브 프로젝트로 진행되지만, clikec 프로젝트의 기본 취지(이 프로젝트는 하나의 바이너리 또는 시스템만을 위해 진행되지 않는다)에 따라, 추후 다른 프로젝트와 합쳐지거나 또다른 서브 프로젝트로 분화될 수 있다.


# 개발 진행 방향 #
최초에는 파일만을 분리해 Dharani 시스템을 구축하고, Client code 부분에서는 직접 include 방식으로 Dharani 시스템을 사용하는 방법으로 테스트 한다.
추후, 시스템의 안정성과 기능성이 확보된 후, Dharani 시스템을 라이브러리 화 한다.

## 개발 환경 ##
> ### OS ###
WindowsXP 기반으로 진행하지만, 추후 Linux 에서도 동작하도록 변경 될 수 있다.
windows/linux 지원 방법은 다음 중 하나, 또는 다수가 될 수 있다.
  * 동일 소스에 대해 매크로와 빌드 스크립트를 이용해 두 환경에서 빌드 가능하도록 하는 방향
  * windows/linux 각각에 대해 sub project 를 만드는 방향

> ### language ###
c++ 기반으로 개발하지만, 가급적 c 레벨로 코드를 다루도록 한다.

> ### IDE ###
visual studio 2008 을 이용한다.