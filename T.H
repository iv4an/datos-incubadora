@file:DependsOn("com.github.doyaaaaaken:kotlin-csv-jvm:0.7.3")
import com.github.doyaaaaaken.kotlincsv.client.*
val csvData = java.io.File("Incubadora-datos (1).csv")
val datos: List<Map<String, String>> = CsvReader().readAllWithHeader(csvData)
println(datos)
