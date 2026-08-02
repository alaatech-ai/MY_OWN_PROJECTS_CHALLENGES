course_info = {
    "name": "python",
    "day": 53,
    "topic": "dictionaries",
    "completed": False
}

print(course_info["topic"])
print(course_info.get("topic"))
print(course_info.keys())
print(course_info.values())

extra_info = {
    "instructor": "google",
    "hours": 2
}

course_info.update(extra_info)
print("after update", course_info)

course_info.pop("name")
print("after remove", course_info)
