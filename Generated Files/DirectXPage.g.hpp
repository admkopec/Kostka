﻿//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#include "pch.h"

#if defined _DEBUG && !defined DISABLE_XAML_GENERATED_BINDING_DEBUG_OUTPUT
extern "C" __declspec(dllimport) int __stdcall IsDebuggerPresent();
#endif

#include "DirectXPage.xaml.h"

void ::StarterKit::DirectXPage::InitializeComponent()
{
    if (_contentLoaded)
    {
        return;
    }
    _contentLoaded = true;
    ::Windows::Foundation::Uri^ resourceLocator = ref new ::Windows::Foundation::Uri(L"ms-appx:///DirectXPage.xaml");
    ::Windows::UI::Xaml::Application::LoadComponent(this, resourceLocator, ::Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation::Application);
}

void ::StarterKit::DirectXPage::Connect(int __connectionId, ::Platform::Object^ __target)
{
    switch (__connectionId)
    {
        case 1:
            {
                this->swapChainPanel = safe_cast<::Windows::UI::Xaml::Controls::SwapChainPanel^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::SwapChainPanel^>(this->swapChainPanel))->Tapped += ref new ::Windows::UI::Xaml::Input::TappedEventHandler(this, (void (::StarterKit::DirectXPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::Input::TappedRoutedEventArgs^))&DirectXPage::OnTapped);
            }
            break;
        case 2:
            {
                this->HitCountCube = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
            }
            break;
        case 3:
            {
                this->HitCountSphere = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
            }
            break;
        case 4:
            {
                this->HitCountTeapot = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
            }
            break;
        case 5:
            {
                this->HitCountCone = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
            }
            break;
        case 6:
            {
                this->HitCountCylinder = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
            }
            break;
        case 7:
            {
                ::Windows::UI::Xaml::Controls::AppBarButton^ element7 = safe_cast<::Windows::UI::Xaml::Controls::AppBarButton^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::AppBarButton^>(element7))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::StarterKit::DirectXPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&DirectXPage::OnNextColorPressed);
            }
            break;
        case 8:
            {
                ::Windows::UI::Xaml::Controls::AppBarButton^ element8 = safe_cast<::Windows::UI::Xaml::Controls::AppBarButton^>(__target);
                (safe_cast<::Windows::UI::Xaml::Controls::AppBarButton^>(element8))->Click += ref new ::Windows::UI::Xaml::RoutedEventHandler(this, (void (::StarterKit::DirectXPage::*)
                    (::Platform::Object^, ::Windows::UI::Xaml::RoutedEventArgs^))&DirectXPage::OnPreviousColorPressed);
            }
            break;
    }
    _contentLoaded = true;
}

::Windows::UI::Xaml::Markup::IComponentConnector^ ::StarterKit::DirectXPage::GetBindingConnector(int __connectionId, ::Platform::Object^ __target)
{
    __connectionId;         // unreferenced
    __target;               // unreferenced
    return nullptr;
}


