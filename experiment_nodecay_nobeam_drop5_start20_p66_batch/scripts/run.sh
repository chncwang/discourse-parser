cp ../../NNDisParserSimpleDO/bin/NNDisParserSimpleDelNonLinearSynFeat0123EtypeDOStartN .
nohup ./NNDisParserSimpleDelNonLinearSynFeat0123EtypeDOStartN -l -train ../data/train.wordpos.zpar.czpar -dev ../data/dev.wordpos.zpar.czpar -test ../data/test.wordpos.zpar.czpar -option ../option/option.nobeam.drop5.feat.start20.p66.batch > ../log/log 2>&1 &
