add_library(adapters SHARED
    book_controller.cpp
    book_dto.cpp
)

target_link_libraries(adapters
    PRIVATE
    Qt5::Core
)