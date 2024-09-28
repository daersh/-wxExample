//
// Created by HYUN WOO Lee on 2024. 9. 21..
//

#include "MainFrame3.h"
#include <wx/wx.h>

// 바인딩 메서드 사용
using namespace std;

MainFrame3::MainFrame3(const wxString &title) : wxFrame(nullptr, wxID_ANY, title) {
    // 생성자
    wxPanel* panel = new wxPanel(this);
    wxButton* button = new wxButton(panel, wxID_ANY, wxT("Button")
        , wxPoint(300, 275), wxSize(200, 50));
    wxSlider* slider = new wxSlider(panel, wxID_ANY, 0,0,100,
        wxPoint(300,200), wxSize(200,-1));
    wxTextCtrl* text = new wxTextCtrl(panel, wxID_ANY,"",
        wxPoint(300,375),wxSize(200,-1));

    // 바인딩을 통해 간단하게 할 수 있다.
    button -> Bind(wxEVT_BUTTON, &MainFrame3::OnButtonClicked, this);
    slider -> Bind(wxEVT_SLIDER, &MainFrame3::OnSliderClicked, this);
    text -> Bind(wxEVT_TEXT, &MainFrame3::OnTextClicked,this);

    // 하단 상태창 생성
    CreateStatusBar();
}

void MainFrame3::OnButtonClicked(wxCommandEvent &event) {
    // 버튼 클릭 이벤트
    wxLogStatus("Button Clicked!!");
}

void MainFrame3::OnSliderClicked(wxCommandEvent &event) {
    wxString str = wxString::Format("Slider Value: %d", event.GetInt());
    wxLogStatus(str);
}

void MainFrame3::OnTextClicked(wxCommandEvent &event) {
    wxString str = wxString::Format("Text Value: %s", event.GetString());
    wxLogStatus(str);
}
