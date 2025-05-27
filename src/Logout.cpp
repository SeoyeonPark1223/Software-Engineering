#include "Logout.h"

// 생성자: userCollection 포인터 저장
Logout::Logout(UserCollection* userCollection)
    : userCollection(userCollection) {} 

// 로그아웃 요청을 처리: 현재 로그인된 유저의 loginStatus를 false로 바꾸고, userCollection의 currentUser도 nullptr로 저장하고 유저의 id를 반환
std::string Logout::logout() {
    User* user = userCollection->getCurrentUser();
    if (user) {
        user->setLoginStatus(false);
        userCollection->setCurrentUser(nullptr);
        return user->getId();
    }
    return "";
}