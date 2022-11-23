#pragma once

#include "Core.h"

namespace Orange{

	class ORANGE_API Application
    {
    public:
        Application();
        virtual~Application();

        void Run();
    };

    // To be defined in CLIENT
    Application* CreateApplication();

}