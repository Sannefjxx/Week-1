#pragma once

#include "_1.g.h"

namespace winrt::opdracht1::implementation
{
    struct _1 : _1T<_1>
    {
        _1() 
        {
            // Xaml objects should not call InitializeComponent during construction.
            // See https://github.com/microsoft/cppwinrt/tree/master/nuget#initializecomponent
        }

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::opdracht1::factory_implementation
{
    struct _1 : _1T<_1, implementation::_1>
    {
    };
}
