#include "Hazel/Renderer/RendererAPI.hh"

namespace Hazel {

    // TEMP: In the future this should be set at runtime
    RendererAPI::API RendererAPI::s_API = RendererAPI::API::OpenGL;

} // namespace Hazel