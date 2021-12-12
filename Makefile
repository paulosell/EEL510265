TARGET=main

LD=g++
OBJS= main.cpp  relogio/clockCalendar.cpp relogio/clock.cpp relogio/calendar.cpp sensor/sensores/temperatura.cpp sensor/Sensor.cpp cadastro/cadastroTemperatura.cpp sensor/sensores/pressao.cpp cadastro/cadastroPressao.cpp

install:$(OBJS)
	$(LD) -o  $(TARGET) $(OBJS)


clean:
	rm -rf sensores