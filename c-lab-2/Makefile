.DEFAULT_GOAL := intruder_detector
CXX := c++
# if the std under 11 , can't compile
# legacy api doesn't support anymore
CFLAGS = -std=c++11

CFLAGS += `pkg-config --cflags --libs opencv4`

intruder_detector: intruder_detector.c
	$(CXX) $(CFLAGS) $^ -o $@

.PHONY:
clean:
	find . -not -type d -perm +100 -delete




