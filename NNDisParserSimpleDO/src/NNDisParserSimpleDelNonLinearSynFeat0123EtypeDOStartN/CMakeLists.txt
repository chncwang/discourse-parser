
include_directories(
  model
)

add_executable(NNDisParserSimpleDelNonLinearSynFeat0123EtypeDOStartN NNDisParser.cpp)
target_link_libraries(NNDisParserSimpleDelNonLinearSynFeat0123EtypeDOStartN ${LIBS})
