<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Will You Be Mine?</title>
    <link rel="stylesheet" href="styles.css">
</head>
<body>
    <div class="container">
        <div class="heart">
            <img src="https://via.placeholder.com/150" alt="Heart Image">
        </div>
        <h1 class="proposal-title">Will You Be Mine?</h1>
        <p class="proposal-text">From the moment I met you, my heart has been yours. I can't imagine my life without you in it. Would you do me the honor of being mine forever?</p>
        <div class="buttons">
            <button class="yes-btn" onclick="acceptProposal()">Yes</button>
            <button class="no-btn" onclick="escapeNoButton(event)">No</button>
        </div>
    </div>

    <script>
        function acceptProposal() {
            alert('Yay! You said yes! ??');
        }

        function escapeNoButton(event) {
            const noButton = event.target;
            const container = document.querySelector('.container');

            // Get random positions within the container
            const maxX = container.offsetWidth - noButton.offsetWidth;
            const maxY = container.offsetHeight - noButton.offsetHeight;

            const randomX = Math.random() * maxX;
            const randomY = Math.random() * maxY;

            // Set the new position of the 'No' button
            noButton.style.position = 'absolute';
            noButton.style.left = randomX + 'px';
            noButton.style.top = randomY + 'px';

            // Optional: Add a little message after a few tries
            setTimeout(() => {
                alert("Aww, I guess you don't want to break my heart... ??");
            }, 500);
        }
    </script>
</body>
</html>
