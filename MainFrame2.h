//
// Created by HYUN WOO Lee on 2024. 9. 21..
//

#ifndef MAINFRAME_H
#define MAINFRAME_H
#include <wx/wx.h>

class MainFrame2: public wxFrame
{

public:
    MainFrame2(const wxString& title);

private:
    void OnButtonClicked(wxCommandEvent& event);
    void OnSliderClicked(wxCommandEvent& event);
    void OnTextClicked(wxCommandEvent& event);
    wxDECLARE_EVENT_TABLE();
};


#endif //MAINFRAME_H
