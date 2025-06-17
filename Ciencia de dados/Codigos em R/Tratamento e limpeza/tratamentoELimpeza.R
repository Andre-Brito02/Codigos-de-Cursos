# Criando um data frame
dados <- read.csv("tempo.csv", sep = ";" ,na.strings = "", stringsAsFactors = TRUE) # nolint
dados
print("--------------------------------------------")

# Encontrando valores NA
dados[!complete.cases(dados), ]

# Removendo o valor menos da coluna Aparencia
dados[!dados$Aparencia %in% c("sol", "nublado", "chuva"), ]$Aparencia <- "chuva"
dados$Aparencia <- factor(dados$Aparencia)
summary(dados$Aparencia)

# Corrigindo a coluna temperatura para estar entre o intervalo -130 e 130
dados[is.na(dados$Temperatura), ]$Temperatura
temp <- dados$Temperatura
dados[temp < -130 | temp > 130, ]$Temperatura <- median(temp)
dados
print("--------------------------------------------")

# Corrigindo a coluna umidade para estar no intervalo 0 e 100 e sem valores NA
dados[is.na(dados$Umidade), ]$Umidade <- median(dados$Umidade, na.rm = TRUE)
umidade <- dados$Umidade
dados[umidade < 0 | umidade > 100, ]$Umidade <- median(umidade)
dados
print("--------------------------------------------")

# Corrigindo o valor NA da coluna vento
dados[is.na(dados$Vento), ]$Vento <- "FALSO"
dados
