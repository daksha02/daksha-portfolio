body {
font-family: Arial, sans-serif;
margin: 0;
background: #0f172a;
color: white;
}

nav {
display: flex;
justify-content: space-between;
padding: 20px 40px;
background: #020617;
}

nav a {
color: white;
margin-left: 20px;
text-decoration: none;
}

nav a:hover {
color: #38bdf8;
}

.hero {
text-align: center;
padding: 80px 20px;
}

.profile {
width: 160px;
border-radius: 50%;
margin-bottom: 20px;
}

.tagline {
font-size: 18px;
color: #38bdf8;
margin-top: 10px;
}

section {
padding: 60px 40px;
max-width: 1000px;
margin: auto;
}

.card {
background: #1e293b;
padding: 20px;
border-radius: 10px;
}

.subtitle {
text-align: center;
color: #94a3b8;
margin-bottom: 20px;
}

.gallery {
display: grid;
grid-template-columns: repeat(auto-fit, minmax(250px, 1fr));
gap: 25px;
}

.cert {
background: #1e293b;
padding: 15px;
border-radius: 10px;
text-align: center;
}

.cert img {
width: 100%;
border-radius: 10px;
transition: transform 0.2s;
}

.cert img:hover {
transform: scale(1.05);
}

.cert p {
margin-top: 10px;
font-size: 14px;
color: #cbd5f5;
}

footer {
text-align: center;
padding: 20px;
background: #020617;
margin-top: 40px;
}
