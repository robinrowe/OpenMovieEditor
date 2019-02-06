// generated by Fast Light User Interface Designer (fluid) version 1.0107

#ifndef ProgressDialog_h
#define ProgressDialog_h
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include "IProgressListener.H"
#include <time.h>
#include <sys/time.h>
#include "../helper.H"
#include <FL/Fl_Button.H>
#include <stdio.h>
#include <FL/Fl_Progress.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Output.H>

class ProgressDialog : public nle::IProgressListener {
public:
  ProgressDialog( const char* title );
private:
  Fl_Double_Window *progressDialog;
  Fl_Button *cancel_button;
  void cb_cancel_button_i(Fl_Button*, void*);
  static void cb_cancel_button(Fl_Button*, void*);
  Fl_Progress *progress_bar;
  Fl_Box *title_box;
  Fl_Output *time_display;
public:
  ~ProgressDialog();
  bool progress( double percent );
  void start();
  void end();
private:
  bool cancel;
  timeval m_start;
};
#endif
