from manim import *
import numpy as np

class LimitCycleWithTwoCenters(Scene):
    def construct(self):
        # Define centers
        center1 = LEFT * 2
        center2 = RIGHT * 2
        radius = 2

        # Draw centers
        dot1 = Dot(center1, color=BLUE)
        dot2 = Dot(center2, color=RED)
        self.add(dot1, dot2)

        # Draw limit cycle (circle)
        cycle = Circle(radius=radius, color=YELLOW).move_to(ORIGIN)
        self.add(cycle)

        # Animation: rotate a point around the cycle
        moving_dot = Dot(cycle.point_at_angle(0), color=WHITE)
        self.add(moving_dot)

        arrow1 = always_redraw(
            lambda: Arrow(
                start=center1,
                end=moving_dot.get_center(),
                buff=0,
                color=GREEN,
                max_tip_length_to_length_ratio=0.2
            ).set_stroke(width=6)
        )
        arrow2 = always_redraw(
            lambda: Arrow(
                start=center2,
                end=moving_dot.get_center(),
                buff=0,
                color=ORANGE,
                max_tip_length_to_length_ratio=0.2
            ).set_stroke(width=6)
        )
        self.add(arrow1, arrow2)

        def update_dot(mob, alpha):
            angle = 2 * PI * alpha
            mob.move_to(cycle.point_at_angle(angle))

        self.play(UpdateFromAlphaFunc(moving_dot, update_dot), run_time=6, rate_func=linear)