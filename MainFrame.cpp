//
// Created by HYUN WOO Lee on 2024. 9. 21..
//

#include "MainFrame.h"
#include <wx/wx.h>
#include <wx/spinctrl.h>

MainFrame::MainFrame(const wxString &title) : wxFrame(nullptr, wxID_ANY, title) {
    // 생성자

    // 0. 패널
    wxPanel* panel = new wxPanel(this);

    //1. 버튼
    // 버튼의 부모, ID, 버튼 텍스트, 버튼상단 위치, 크기
    wxButton* button = new wxButton(panel, wxID_ANY, wxT("OK"),wxPoint(150,50),wxSize(100,50), wxBU_RIGHT);

    // 2. 체크박스
    wxCheckBox* check_box = new wxCheckBox(panel, wxID_ANY, wxT("OK"),
        wxPoint(150,100), wxDefaultSize, wxCHK_3STATE | wxCHK_ALLOW_3RD_STATE_FOR_USER);

    // 3. 텍스트
    wxStaticText* static_text = new wxStaticText(panel,wxID_ANY,"Static Text - Not editable!",
        wxPoint(150,150),wxSize(400,20),wxALIGN_CENTER_HORIZONTAL);// 중앙에 위치
    static_text->SetBackgroundColour(*wxGREEN);
    // 4. 입력창
    wxTextCtrl* text_ctrl = new wxTextCtrl(panel,wxID_ANY,"TextCtrl - editable",
        wxPoint(150,200), wxSize(200,-1)
        , wxTE_PASSWORD);

    // 5. 슬라이더
    // 현재위치, 최소값, 최대값,
    wxSlider* slider = new wxSlider(panel,wxID_ANY,25,0,100,
        wxPoint(150,400), wxSize(200,-1)
        , wxSL_VALUE_LABEL);    // 값 보여줌

    // 6. 게이지
    wxGauge* gauge = new wxGauge(panel,wxID_ANY,100,
        wxPoint(200,450), wxSize(10,125)
        , wxGA_VERTICAL);
    gauge->SetValue(50);// 세로로 해줌

    // 선택창
    wxArrayString choices;
    choices.Add("Item B");
    choices.Add("Item A");
    choices.Add("Item C");
    wxChoice* choice = new wxChoice(panel,wxID_ANY,
        wxPoint(150,500),wxSize(100,-1)
        ,choices, wxCB_SORT);

    //스핀
    wxSpinCtrl* spin_ctrl = new wxSpinCtrl(panel,wxID_ANY,"sadf",
        wxPoint(150,600),wxSize(100,-1)
        ,wxSP_WRAP);

    //리스트 박스
    wxListBox* list_box = new wxListBox(panel,wxID_ANY,
        wxPoint(150,700),wxSize(100,-1),
        choices, wxLB_MULTIPLE);

    //라디오박스
    wxRadioBox* radioBox = new wxRadioBox(panel,wxID_ANY,"RadioBox",
        wxPoint(485,475), wxDefaultSize,
        choices, 2,wxRA_SPECIFY_ROWS);
    radioBox->Select(0);

    // 모든 코드에는 스택에 new를 통해 생성해야된다.
    // 메모리 할당 취소할 필요 없다
    // wx가 알아서 해준다.

}
