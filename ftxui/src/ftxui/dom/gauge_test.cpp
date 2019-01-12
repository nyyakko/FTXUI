#include "ftxui/dom/elements.hpp"
#include "ftxui/screen/screen.hpp"
#include "gtest/gtest.h"

using namespace ftxui;
using namespace ftxui;

TEST(GaugeTest, zero) {
  auto root = gauge(0);
  Screen screen(11,1);
  Render(screen, root.get());

  EXPECT_EQ("           ", screen.ToString());
}

TEST(GaugeTest, half) {
  auto root = gauge(0.5);
  Screen screen(11,1);
  Render(screen, root.get());

  EXPECT_EQ("█████▍     ", screen.ToString());
  //"  ▏▎▍▌▊▉█";
}

TEST(GaugeTest, one) {
  auto root = gauge(1.0);
  Screen screen(11,1);
  Render(screen, root.get());

  EXPECT_EQ("███████████", screen.ToString());
}
