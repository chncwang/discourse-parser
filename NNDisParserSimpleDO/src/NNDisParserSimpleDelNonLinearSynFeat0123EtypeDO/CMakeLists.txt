
include_directories(
  model
)

add_executable(NNDisParserSimpleDelNonLinearSynFeat0123EtypeDO NNDisParser.cpp)
target_link_libraries(NNDisParserSimpleDelNonLinearSynFeat0123EtypeDO ${LIBS})
