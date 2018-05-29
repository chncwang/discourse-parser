
include_directories(
  model
)

add_executable(NNDisParserSimpleDelNonLinearSynFeat0123EtypeDORand NNDisParser.cpp)
target_link_libraries(NNDisParserSimpleDelNonLinearSynFeat0123EtypeDORand ${LIBS})
