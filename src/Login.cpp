#include "Login.h"

// 생성자: userCollection 포인터 저장
Login::Login(UserCollection* userCollection)
    : userCollection(userCollection) {}

// 로그인을 위해 필요한 정보로 유저 확인 후 로그인 처리
std::tuple<std::string, std::string> Login::login(std::string id, std::string password) {
    User* user = userCollection->getUserById(id);

    if (user->checkIdAndPassword(id, password)) {
        user->setLoginStatus(true);
        userCollection->setCurrentUser(user);
        return std::make_tuple(id, password);
    }
    return std::make_tuple("", "");
}