//
// Created by HYUN WOO Lee on 2024. 9. 21..
//

#include "MainFrame2.h"
#include <wx/wx.h>

// 이벤트 발행 방법에 대한 설명이다.
using namespace std;
enum IDs {
    BUTTON_ID = 2,
    SLIDER_ID = 3,
    TEXT_ID = 4
};

wxBEGIN_EVENT_TABLE(MainFrame2, wxFrame)
    EVT_BUTTON(BUTTON_ID, MainFrame2::OnButtonClicked)
    EVT_SLIDER(SLIDER_ID, MainFrame2::OnSliderClicked)
    EVT_TEXT(TEXT_ID, MainFrame2::OnTextClicked)
wxEND_EVENT_TABLE()

MainFrame2::MainFrame2(const wxString &title) : wxFrame(nullptr, wxID_ANY, title) {
    // 생성자
    wxPanel* panel = new wxPanel(this);

    wxButton* button = new wxButton(panel, BUTTON_ID, wxT("Button")
        , wxPoint(300, 275), wxSize(200, 50));
    wxSlider* slider = new wxSlider(panel, SLIDER_ID, 0,0,100,
        wxPoint(300,200), wxSize(200,-1));
    wxTextCtrl* text = new wxTextCtrl(panel, TEXT_ID,"",
        wxPoint(300,375),wxSize(200,-1));
    wxButton* button2 = new wxButton(panel, BUTTON_ID, wxT("Button2"),wxPoint(300,500),wxSize(200,-1));
    // 하단 상태창 생성
    CreateStatusBar();
}

void MainFrame2::OnButtonClicked(wxCommandEvent &event) {
    // 버튼 클릭 이벤트
    wxLogStatus("Button Clicked!!");
}

void MainFrame2::OnSliderClicked(wxCommandEvent &event) {
    wxString str = wxString::Format("Slider Value: %d", event.GetInt());
    wxLogStatus(str);
}

void MainFrame2::OnTextClicked(wxCommandEvent &event) {
    wxString str = wxString::Format("Text Value: %s", event.GetString());
    wxLogStatus(str);
}

void MainFrame2::OnButtonClicked2(wxCommandEvent &event) {
    wxString str = wxString::Format("Button2 Clicked!!");
    wxLogStatus(str);
}
