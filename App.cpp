//
// Created by HYUN WOO Lee on 2024. 9. 21..
//

#include "App.h"
#include <wx/wx.h>

// #include "MainFrame.h"
// #include "MainFrame2.h"
#include "MainFrame3.h"

wxIMPLEMENT_APP(App);

bool App::OnInit() {
    // 메인 화면 객체 불러오기
    // MainFrame* main_frame = new MainFrame("C++ GUI");
    MainFrame3* main_frame = new MainFrame3("C++ GUI_2");

    // 화면 크기 지정
    main_frame->SetClientSize(wxSize(800, 800));
    // 정중앙으로
    main_frame->Center();
    // 보이기
    main_frame->Show();

    return true;
}
