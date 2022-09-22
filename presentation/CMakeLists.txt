add_library(presentation SHARED
    sources.qrc
)

target_link_libraries(presentation
    PRIVATE
    Qt5::Quick
)
