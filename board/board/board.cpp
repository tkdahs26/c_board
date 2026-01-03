#include <iostream>
#include <vector>
#include <string>

using namespace std;

 
struct Post {
    string title;
    string content;
};

int main() {
    vector<Post> board;  
    int choice;

    while (true) {
   
        cout << "\n---------------" << endl;
        cout << "   C++ 텍스트 게시판" << endl;
        cout << "-----------------" << endl;
        cout << "1. 글쓰기" << endl;
        cout << "2. 목록보기" << endl;
        cout << "3. 종료" << endl;
        cout << "선택: ";
        cin >> choice;

 
        cin.ignore();

        if (choice == 1) {
 
            Post newPost;
            cout << "제목 입력: ";
            getline(cin, newPost.title);  
            cout << "내용 입력: ";
            getline(cin, newPost.content);

            board.push_back(newPost);  
            cout << "\n[알림] 글이 등록되었습니다!" << endl;

        }
        else if (choice == 2) { 
            cout << "\n--- 전체 게시글 목록 ---" << endl;
            if (board.empty()) {
                cout << "게시글이 없습니다." << endl;
            }
            else {
                for (int i = 0; i < board.size(); i++) {
                    cout << i + 1 << ". 제목: " << board[i].title << endl;
                    cout << "   내용: " << board[i].content << endl;
                    cout << "-----------------------" << endl;
                }
            }

        }
        else if (choice == 3) {
            cout << "프로그램을 종료합니다." << endl;
            break;

        }
        else {
            cout << "잘못된 번호입니다. 다시 선택하세요." << endl;
        }
    }

    return 0;
}