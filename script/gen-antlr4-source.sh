ANTLR4_JAR=antlr-4.9.3-complete.jar
# ANTLR4_JAR=antlr-4.13.0-complete.jar
#/export/opt/openjdk-20.0.1/Contents/Home/bin/java -jar /export/opt/antlr4/antlr-4.9.3-complete.jar -o ./gen -package pal -Dlanguage=Cpp dsl/PAL.g4
~/export/opt/jdk-22.0.1/Contents/Home/bin/java -jar ~/export/opt/antlr4/$ANTLR4_JAR -o ./gen -package pal -Dlanguage=Cpp dsl/PAL.g4
mv gen/dsl/* gen/
rm -rf gen/dsl